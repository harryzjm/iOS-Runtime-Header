//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSXPCCoding-Protocol.h>
#import <SpringBoardServices/BSXPCSecureCoding-Protocol.h>

@class NSString;

@interface SBSUnlockOptions : NSObject <BSXPCCoding, BSXPCSecureCoding>
{
    _Bool _aboveOtherContexts;
}

+ (_Bool)supportsBSXPCSecureCoding;
@property(nonatomic, setter=_setAboveOtherContexts:) _Bool _aboveOtherContexts; // @synthesize _aboveOtherContexts;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
