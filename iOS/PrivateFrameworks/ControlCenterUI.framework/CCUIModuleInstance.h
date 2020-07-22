//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ControlCenterUI/NSCopying-Protocol.h>

@class CCSModuleMetadata;
@protocol CCUIContentModule;

@interface CCUIModuleInstance : NSObject <NSCopying>
{
    CCSModuleMetadata *_metadata;
    id <CCUIContentModule> _module;
    struct CCUILayoutSize _prototypeModuleSize;
}

@property(readonly, nonatomic) struct CCUILayoutSize prototypeModuleSize; // @synthesize prototypeModuleSize=_prototypeModuleSize;
@property(readonly, nonatomic) id <CCUIContentModule> module; // @synthesize module=_module;
@property(readonly, nonatomic) CCSModuleMetadata *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMetadata:(id)arg1 module:(id)arg2 prototypeModuleSize:(struct CCUILayoutSize)arg3;

@end
