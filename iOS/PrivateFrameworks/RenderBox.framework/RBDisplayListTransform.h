//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RenderBox/NSCopying-Protocol.h>

@interface RBDisplayListTransform : NSObject <NSCopying>
{
    struct DisplayListTransform _transform;
}

+ (id)transform;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)applyingToDisplayList:(id)arg1;
- (void)applyToDisplayList:(id)arg1;
- (void)addColorReplacementTo:(CDStruct_0b1c536a)arg1 colorSpace:(int)arg2;
- (void)addColorReplacementFrom:(CDStruct_0b1c536a)arg1 to:(CDStruct_0b1c536a)arg2 colorSpace:(int)arg3;
- (void)removeAll;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
