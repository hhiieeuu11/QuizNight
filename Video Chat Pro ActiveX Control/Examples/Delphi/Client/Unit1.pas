unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, OleCtrls, VideoChatReceiverLib_TLB,
  VideoChatSenderLib_TLB;

type
  TForm1 = class(TForm)
    GroupBox1: TGroupBox;
    Label1: TLabel;
    cbovideodevice: TComboBox;
    Label2: TLabel;
    cboaudiodevice: TComboBox;
    Label3: TLabel;
    cbovideoformat: TComboBox;
    Label5: TLabel;
    cboaudiocomplex: TComboBox;
    Label6: TLabel;
    txtframerate: TEdit;
    Label7: TLabel;
    cboaudioquality: TComboBox;
    Label8: TLabel;
    txtVideobitrate: TEdit;
    Label9: TLabel;
    chksendvideo: TCheckBox;
    chksendaudio: TCheckBox;
    Label10: TLabel;
    txtconnectIP: TEdit;
    Label11: TLabel;
    txtConnectPortNo: TEdit;
    Button1: TButton;
    Button2: TButton;
    Label12: TLabel;
    lblvideobitrate: TLabel;
    Label13: TLabel;
    lblaudiobitrate: TLabel;
    GroupBox2: TGroupBox;
    Label14: TLabel;
    txtListenIP: TEdit;
    Label15: TLabel;
    txtlistenportno: TEdit;
    chkreceivevideo: TCheckBox;
    chkreceiveaudio: TCheckBox;
    Button3: TButton;
    Button4: TButton;
    Button5: TButton;
    Label4: TLabel;
    txtConfNumber: TEdit;
    Label16: TLabel;
    txtUserID: TEdit;
    VideoChatSender1: TVideoChatSender;
    VideoChatReceiver1: TVideoChatReceiver;
    procedure FormActivate(Sender: TObject);
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure Button3Click(Sender: TObject);
    procedure Button4Click(Sender: TObject);
    procedure Button5Click(Sender: TObject);
    procedure VideoChatSender1SendStream(ASender: TObject; fVideoBitrate,
      fAudioBitrate: Single);
    procedure FormClose(Sender: TObject; var Action: TCloseAction);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

uses Unit2;

{$R *.dfm}

procedure TForm1.FormActivate(Sender: TObject);
var ivideodevicecount: integer;
var iaudiodevicecount: integer;
var i:integer;
begin

  ivideodevicecount := VideoChatSender1.GetVideoDeviceCount();

  for i := 0 To ivideodevicecount-1 do
     begin
        cbovideodevice.Items.Add(VideoChatSender1.GetVideoDeviceName(i));
     end;

     if cbovideodevice.Items.Count >0 then
          cbovideodevice.ItemIndex:=0;


  iaudiodevicecount := VideoChatSender1.GetAudioDeviceCount();

  for i:=0 to iaudiodevicecount-1 do
      begin
           cboaudiodevice.Items.Add(VideoChatSender1.GetAudioDeviceName(i));
      end;

      if cboaudiodevice.Items.Count >0 then
          cboaudiodevice.ItemIndex:=0;           

   cbovideoformat.Items.Add('160x120');
   cbovideoformat.Items.Add('176x144');
   cbovideoformat.Items.Add('320x240');
   cbovideoformat.Items.Add('352x288');
   cbovideoformat.Items.Add('640x480');
   cbovideoformat.Items.Add('1280x720');
   cbovideoformat.ItemIndex:=2;

   cboaudiocomplex.Items.Add('0');
   cboaudiocomplex.Items.Add('1');
   cboaudiocomplex.Items.Add('2');
   cboaudiocomplex.Items.Add('3');
   cboaudiocomplex.ItemIndex:=2;
   for i := 0 To 10 do
     begin
        cboaudioquality.Items.Add(Format('%d', [i] ))
      end;
 cboaudioquality.ItemIndex:=8;






end;

procedure TForm1.Button1Click(Sender: TObject);
var strvideodevice : String;
var straudiodevice : String;
var iresult : Integer;
begin


    VideoChatSender1.VideoDevice:=cbovideodevice.ItemIndex;
    VideoChatSender1.AudioDevice:=cboaudiodevice.ItemIndex;

    VideoChatSender1.VideoFormat := cbovideoformat.ItemIndex;
    VideoChatSender1.FrameRate :=strtoint(txtframerate.Text);
    VideoChatSender1.VideoBitrate := strtoint(txtVideobitrate.Text);
    VideoChatSender1.AudioComplexity :=cboaudiocomplex.ItemIndex;
    VideoChatSender1.AudioQuality := cboaudioquality.ItemIndex;
    VideoChatSender1.SendVideoStream :=chksendvideo.Checked;
    VideoChatSender1.SendAudioStream :=chksendaudio.Checked;

    VideoChatSender1.ConferenceNumber:= strtoint(txtConfNumber.Text);
    VideoChatSender1.ConferenceUserID:= strtoint(txtUserID.Text);

    iresult :=VideoChatSender1.Connect(txtconnectIP.Text,strtoint(txtConnectPortNo.Text));

   
end;

procedure TForm1.Button2Click(Sender: TObject);
begin
VideoChatSender1.Disconnect();
end;

procedure TForm1.Button3Click(Sender: TObject);
var bresult : bool;
begin
VideoChatReceiver1.ReceiveAudioStream:=chkreceiveaudio.Checked;
VideoChatReceiver1.ReceiveVideoStream := chkreceivevideo.checked;

VideoChatReceiver1.ConferenceNumber:= strtoint(txtConfNumber.Text);
VideoChatReceiver1.ConferenceUserID:= strtoint(txtUserID.Text);



bresult :=VideoChatReceiver1.Listen(txtListenIP.Text,strtoint(txtlistenportno.Text));


end;

procedure TForm1.Button4Click(Sender: TObject);
begin
VideoChatReceiver1.Disconnect();
end;



procedure TForm1.Button5Click(Sender: TObject);
begin
    ShowMessage(VideoChatReceiver1.GetIPAddress());


end;

procedure TForm1.VideoChatSender1SendStream(ASender: TObject;
  fVideoBitrate, fAudioBitrate: Single);
begin
     lblvideobitrate.Caption:=Format('%f',[fVideoBitrate]);

    lblaudiobitrate.Caption:=Format('%f',[ fAudioBitrate]);
end;

procedure TForm1.FormClose(Sender: TObject; var Action: TCloseAction);
begin

  Form2.Close;

end;

end.
