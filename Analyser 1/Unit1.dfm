object Form1: TForm1
  Left = 59
  Top = 115
  Width = 494
  Height = 374
  Caption = 'Analyser 1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 8
    Width = 80
    Height = 29
    Caption = 'Label1'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Georgia'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 168
    Top = 8
    Width = 44
    Height = 29
    Caption = #1056#1072#1079
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Georgia'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 8
    Top = 56
    Width = 80
    Height = 29
    Caption = 'Label1'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Georgia'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 168
    Top = 56
    Width = 34
    Height = 29
    Caption = 'dB'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Georgia'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label5: TLabel
    Left = 240
    Top = 8
    Width = 80
    Height = 29
    Caption = 'Label1'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Georgia'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label6: TLabel
    Left = 240
    Top = 56
    Width = 80
    Height = 29
    Caption = 'Label1'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Georgia'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label7: TLabel
    Left = 256
    Top = 120
    Width = 80
    Height = 29
    Caption = 'Label1'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Georgia'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Button1: TButton
    Left = 8
    Top = 88
    Width = 217
    Height = 41
    Caption = #1063#1090#1077#1085#1080#1077'+'#1047#1072#1087#1080#1089#1100
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Georgia'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    OnClick = Button1Click
  end
  object Memo1: TMemo
    Left = 8
    Top = 152
    Width = 217
    Height = 105
    Lines.Strings = (
      'Memo1')
    TabOrder = 1
  end
  object Button2: TButton
    Left = 16
    Top = 272
    Width = 201
    Height = 25
    Caption = #1063#1090#1077#1085#1080#1077'+'#1056#1072#1089#1095#1105#1090
    TabOrder = 2
    OnClick = Button2Click
  end
  object MainMenu1: TMainMenu
    Left = 112
    Top = 24
    object Open1: TMenuItem
      Caption = 'Open'
      OnClick = Open1Click
    end
  end
  object Open: TOpenDialog
    Left = 112
    Top = 56
  end
end
