object Form1: TForm1
  Left = 162
  Top = 98
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = #1040#1056#1059' 2020'
  ClientHeight = 264
  ClientWidth = 852
  Color = clSilver
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 200
    Width = 3
    Height = 13
  end
  object Label2: TLabel
    Left = 248
    Top = 200
    Width = 3
    Height = 13
  end
  object Label3: TLabel
    Left = 616
    Top = 16
    Width = 73
    Height = 29
    Caption = 'Label3'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 704
    Top = 16
    Width = 134
    Height = 29
    Caption = 'ms. Release'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 616
    Top = 112
    Width = 73
    Height = 29
    Caption = 'Label5'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label6: TLabel
    Left = 616
    Top = 64
    Width = 73
    Height = 29
    Caption = 'Label6'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label7: TLabel
    Left = 616
    Top = 160
    Width = 73
    Height = 29
    Caption = 'Label7'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label8: TLabel
    Left = 720
    Top = 64
    Width = 117
    Height = 29
    Caption = #1059#1089#1080#1083#1077#1085#1080#1077
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label9: TLabel
    Left = 712
    Top = 112
    Width = 63
    Height = 29
    Caption = #1050#1086#1084#1087
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label10: TLabel
    Left = 704
    Top = 160
    Width = 105
    Height = 29
    Caption = #1072#1084#1087'. '#1074#1099#1093'.'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object TrackBar1: TTrackBar
    Left = 0
    Top = 8
    Width = 609
    Height = 33
    Max = 200
    Orientation = trHorizontal
    Frequency = 1
    Position = 120
    SelEnd = 0
    SelStart = 0
    TabOrder = 0
    TickMarks = tmBottomRight
    TickStyle = tsAuto
    OnChange = TrackBar1Change
  end
  object TrackBar2: TTrackBar
    Left = 0
    Top = 56
    Width = 609
    Height = 33
    Max = 220
    Min = 20
    Orientation = trHorizontal
    Frequency = 1
    Position = 200
    SelEnd = 0
    SelStart = 0
    TabOrder = 1
    TickMarks = tmBottomRight
    TickStyle = tsAuto
    OnChange = TrackBar2Change
  end
  object ComboBox1: TComboBox
    Left = 8
    Top = 224
    Width = 217
    Height = 34
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Palatino Linotype'
    Font.Style = []
    ItemHeight = 26
    ParentFont = False
    TabOrder = 2
    OnChange = ComboBox1Change
  end
  object Button1: TButton
    Left = 472
    Top = 224
    Width = 185
    Height = 33
    Caption = 'Start'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Palatino Linotype'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = Button1Click
  end
  object ComboBox2: TComboBox
    Left = 248
    Top = 224
    Width = 209
    Height = 34
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Palatino Linotype'
    Font.Style = []
    ItemHeight = 26
    ParentFont = False
    TabOrder = 4
    OnChange = ComboBox2Change
  end
  object TrackBar4: TTrackBar
    Left = 0
    Top = 152
    Width = 609
    Height = 41
    Max = 200
    Orientation = trHorizontal
    Frequency = 1
    Position = 100
    SelEnd = 0
    SelStart = 0
    TabOrder = 5
    TickMarks = tmBottomRight
    TickStyle = tsAuto
    OnChange = TrackBar4Change
  end
  object ProgressBar1: TProgressBar
    Left = 8
    Top = 104
    Width = 593
    Height = 25
    Min = 0
    Max = 240
    Smooth = True
    TabOrder = 6
  end
  object Panel1: TPanel
    Left = 472
    Top = 192
    Width = 369
    Height = 25
    Color = clAppWorkSpace
    TabOrder = 7
  end
  object Button2: TButton
    Left = 664
    Top = 224
    Width = 177
    Height = 33
    Caption = 'Stop'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Sylfaen'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
    OnClick = Button2Click
  end
  object ALAudioIn1: TALAudioIn
    Enabled = False
    Device.AlternativeDevices = <>
    Device.DeviceName = 'Default'
    AudioFormat.SampleRate = 48000
    OutputPin.Form = Form1
    OutputPin.SinkPins = (
      Form1.ALDynamicRangeCompressor1.InputPin)
    Top = 232
  end
  object ALAudioOut1: TALAudioOut
    Enabled = False
    InputPin.Form = Form1
    InputPin.SourcePin = Form1.ALAmplifier1.OutputPin
    Device.AlternativeDevices = <>
    Device.DeviceName = 'Default'
    Left = 96
    Top = 232
  end
  object ALDynamicRangeCompressor1: TALDynamicRangeCompressor
    Enabled = False
    InputPin.Form = Form1
    InputPin.SourcePin = Form1.ALAudioIn1.OutputPin
    OutputPin.Form = Form1
    OutputPin.SinkPins = (
      Form1.ALAmplifier1.InputPin)
    Threshold = -50
    CompressRatio = 4000
    Attack = 50
    Release = 250
    MixCoefficient = 1
    Left = 32
    Top = 232
    _Floats = (
      (
        Gain
        0))
  end
  object ALAmplifier1: TALAmplifier
    InputPin.Form = Form1
    InputPin.SourcePin = Form1.ALDynamicRangeCompressor1.OutputPin
    OutputPin.Form = Form1
    OutputPin.SinkPins = (
      Form1.ALAudioOut1.InputPin)
    Coefficient = 1
    Left = 64
    Top = 232
  end
end
