//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface PXCMMComposeRecipientDataSource : NSObject
{
    NSArray *_composeRecipients;
    NSSet *_recipients;
}

+ (id)new;
@property(copy, nonatomic) NSSet *recipients; // @synthesize recipients=_recipients;
@property(readonly, copy, nonatomic) NSArray *composeRecipients; // @synthesize composeRecipients=_composeRecipients;
- (void).cxx_destruct;
- (unsigned long long)indexOfComposeRecipientForRecipient:(id)arg1;
- (id)initWithComposeRecipients:(id)arg1 recipients:(id)arg2;
- (id)init;

@end

