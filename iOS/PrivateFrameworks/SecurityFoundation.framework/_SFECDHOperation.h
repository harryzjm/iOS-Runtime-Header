//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/SFKeyDerivingOperation-Protocol.h>

@class NSString;

@interface _SFECDHOperation : NSObject <SFKeyDerivingOperation>
{
    id _ecdhOperationInternal;
}

+ (_Bool)supportsSecureCoding;
+ (id)_defaultOperation;
+ (long long)_defaultMode;
+ (long long)keySource;
- (void).cxx_destruct;
@property(nonatomic) long long mode;
- (id)deriveKeyWithSpecifier:(id)arg1 fromKeySource:(id)arg2 error:(id *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMode:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

