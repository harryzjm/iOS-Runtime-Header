//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSXPCSecureCoding-Protocol.h>

@class BSMachPortSendRight, NSString;

@interface SBSFocusModesHomeScreenSnapshot : NSObject <BSXPCSecureCoding>
{
    _Bool _wantsListVisible;
    NSString *_listIdentifier;
    NSString *_focusModeIdentifier;
    BSMachPortSendRight *_machPortSendRight;
}

+ (_Bool)supportsBSXPCSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool wantsListVisible; // @synthesize wantsListVisible=_wantsListVisible;
@property(retain, nonatomic) BSMachPortSendRight *machPortSendRight; // @synthesize machPortSendRight=_machPortSendRight;
@property(copy, nonatomic) NSString *focusModeIdentifier; // @synthesize focusModeIdentifier=_focusModeIdentifier;
@property(copy, nonatomic) NSString *listIdentifier; // @synthesize listIdentifier=_listIdentifier;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithListIdentifier:(id)arg1 focusModeIdentifier:(id)arg2 machPortSendRight:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
