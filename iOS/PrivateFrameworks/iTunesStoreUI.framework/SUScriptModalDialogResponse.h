//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SUScriptModalDialogResponse : NSObject
{
    long long _buttonIndex;
    NSString *_textFieldValue;
}

@property(retain, nonatomic) NSString *textFieldValue; // @synthesize textFieldValue=_textFieldValue;
@property(nonatomic) long long buttonIndex; // @synthesize buttonIndex=_buttonIndex;
- (void)dealloc;

@end
