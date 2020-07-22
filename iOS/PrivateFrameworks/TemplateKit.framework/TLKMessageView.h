//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKTextBalloonView, NSString;

@interface TLKMessageView
{
    NSString *_messageText;
    unsigned long long _messageServiceType;
    unsigned long long _messageStatus;
    CKTextBalloonView *_textBalloonView;
}

@property(retain) CKTextBalloonView *textBalloonView; // @synthesize textBalloonView=_textBalloonView;
@property unsigned long long messageStatus; // @synthesize messageStatus=_messageStatus;
@property unsigned long long messageServiceType; // @synthesize messageServiceType=_messageServiceType;
@property(retain) NSString *messageText; // @synthesize messageText=_messageText;
- (void).cxx_destruct;
- (id)observableProperties;
- (void)observedPropertiesChanged;
- (id)init;

@end
