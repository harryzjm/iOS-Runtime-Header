//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MFMailToURLComponents : NSObject
{
    NSArray *_toRecipients;
    NSArray *_ccRecipients;
    NSArray *_bccRecipients;
    NSString *_subject;
    NSString *_body;
}

+ (id)componentsWithURL:(id)arg1;
@property(readonly, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(readonly, nonatomic) NSArray *bccRecipients; // @synthesize bccRecipients=_bccRecipients;
@property(readonly, nonatomic) NSArray *ccRecipients; // @synthesize ccRecipients=_ccRecipients;
@property(readonly, nonatomic) NSArray *toRecipients; // @synthesize toRecipients=_toRecipients;
- (void)_decomposeURL:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)init;

@end

