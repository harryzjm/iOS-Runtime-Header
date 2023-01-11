//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ExposureNotification/CUXPCCodable-Protocol.h>

@interface ENScanInstance : NSObject <CUXPCCodable>
{
    unsigned char _minimumAttenuation;
    unsigned char _typicalAttenuation;
    long long _secondsSinceLastScan;
}

@property(nonatomic) long long secondsSinceLastScan; // @synthesize secondsSinceLastScan=_secondsSinceLastScan;
@property(nonatomic) unsigned char typicalAttenuation; // @synthesize typicalAttenuation=_typicalAttenuation;
@property(nonatomic) unsigned char minimumAttenuation; // @synthesize minimumAttenuation=_minimumAttenuation;
- (id)description;
- (void)encodeWithXPCObject:(id)arg1;
- (id)initWithXPCObject:(id)arg1 error:(id *)arg2;

@end
