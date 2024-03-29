//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IBICImageResizingBehavior : NSObject
{
    long long _resizingMode;
    CDStruct_c519178c _capInsets;
    long long _centerFillMode;
    struct CGSize _centerSize;
}

+ (id)resizingBehaviorWithJSONRepresentation:(id)arg1;
+ (_Bool)validateJSONRepresentation:(id)arg1 forManifestArchivist:(id)arg2 result:(id)arg3;
+ (id)defaultResizingBehavior;
@property(readonly) CDStruct_c519178c capInsets; // @synthesize capInsets=_capInsets;
@property(readonly) struct CGSize centerSize; // @synthesize centerSize=_centerSize;
@property(readonly) long long centerFillMode; // @synthesize centerFillMode=_centerFillMode;
@property(readonly) long long resizingMode; // @synthesize resizingMode=_resizingMode;
- (id)resizingBehaviorByApplyingScale:(double)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isResizable;
- (_Bool)isPartBasedVertical;
- (_Bool)isPartBasedHorizontal;
- (_Bool)getValidatedCapInsets:(CDStruct_c519178c *)arg1 centerSize:(struct CGSize *)arg2 forSourceImageSize:(struct CGSize)arg3;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToImageResizingBehavior:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)JSONRepresentation;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResizingMode:(long long)arg1 capInsets:(CDStruct_c519178c)arg2 centerFillMode:(long long)arg3 centerSize:(struct CGSize)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

