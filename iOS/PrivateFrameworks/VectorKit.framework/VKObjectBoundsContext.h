//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VKObjectBoundsContext : NSObject
{
    vector_e20517dc _points;
    struct VKEdgeInsets _edgePadding;
}

@property(nonatomic) struct VKEdgeInsets edgePadding; // @synthesize edgePadding=_edgePadding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (CDStruct_90e2a262)boundingRect;
- (_Bool)isEmpty;
- (void)addPoints:(const vector_e20517dc *)arg1;

@end

