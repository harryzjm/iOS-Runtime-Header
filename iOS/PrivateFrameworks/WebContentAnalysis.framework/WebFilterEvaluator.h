//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <WebContentAnalysis/NSSecureCoding-Protocol.h>
#import <WebContentAnalysis/WFPINEntryViewControllerProtocol-Protocol.h>

@class NSMutableData, NSString, NSURL, WFRemotePINEntryViewController;

@interface WebFilterEvaluator : NSObject <WFPINEntryViewControllerProtocol, NSSecureCoding>
{
    unsigned long long _filterState;
    NSURL *_url;
    NSString *_pageTitle;
    NSMutableData *_buffer;
    CDUnknownBlockType _completion;
    WFRemotePINEntryViewController *_remoteViewController;
}

+ (_Bool)supportsSecureCoding;
+ (id)createWithResponse:(id)arg1;
+ (_Bool)isManagedSession;
@property(retain, nonatomic) WFRemotePINEntryViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
- (void)userDidCancel;
- (void)userEnteredCorrectPIN;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)unblockWithCompletion:(CDUnknownBlockType)arg1;
- (void)attemptUnblockWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)wasBlocked;
- (int)filterState;
- (id)dataComplete;
- (id)addData:(id)arg1;
- (void)dealloc;
- (id)initWithResponse:(id)arg1;
- (id)blockPageForPageWithTitle:(id)arg1 origURL:(id)arg2;
- (id)debugPageForPageWithData:(id)arg1 forURL:(id)arg2 debugString:(id)arg3;

@end

