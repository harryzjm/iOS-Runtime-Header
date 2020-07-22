//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDSourceEntity, NSString;

@interface HDSourceRevision : NSObject
{
    HDSourceEntity *_sourceEntity;
    NSString *_version;
    NSString *_productType;
    CDStruct_f6aba300 _operatingSystemVersion;
}

@property(readonly, nonatomic) CDStruct_f6aba300 operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
@property(readonly, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) HDSourceEntity *sourceEntity; // @synthesize sourceEntity=_sourceEntity;
- (void).cxx_destruct;
- (id)initWithSource:(id)arg1 version:(id)arg2 productType:(id)arg3 operatingSystemVersion:(CDStruct_f6aba300)arg4;

@end
