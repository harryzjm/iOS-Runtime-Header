//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXViewSpec;

@interface PXBasicTileUserData : NSObject
{
    PXViewSpec *_viewSpec;
}

+ (id)userDataWithViewSpec:(id)arg1;
@property(readonly, nonatomic) PXViewSpec *viewSpec; // @synthesize viewSpec=_viewSpec;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithViewSpec:(id)arg1;
- (id)init;

@end

