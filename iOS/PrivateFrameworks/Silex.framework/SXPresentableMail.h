//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SXPresentableMail : NSObject
{
    NSString *_recipient;
    NSString *_subject;
}

@property(readonly, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(readonly, nonatomic) NSString *recipient; // @synthesize recipient=_recipient;
- (void).cxx_destruct;
- (id)initWithRecipient:(id)arg1 subject:(id)arg2;

@end
