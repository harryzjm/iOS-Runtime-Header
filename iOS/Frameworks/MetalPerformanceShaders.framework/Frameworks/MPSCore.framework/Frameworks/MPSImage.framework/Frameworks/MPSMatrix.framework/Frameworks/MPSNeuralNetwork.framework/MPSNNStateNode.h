//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class MPSNNFilterNode;
@protocol MPSHandle;

@interface MPSNNStateNode : NSObject
{
    id <MPSHandle> _handle;
    MPSNNFilterNode *_parent;
}

@property(retain, nonatomic) id <MPSHandle> handle; // @synthesize handle=_handle;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)debugDescription;
- (id)initWithParent:(id)arg1;

@end
