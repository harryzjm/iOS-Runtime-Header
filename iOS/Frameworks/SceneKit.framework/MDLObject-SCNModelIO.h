//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ModelIO/MDLObject.h>

@interface MDLObject (SCNModelIO)
+ (id)objectWithSCNNode:(id)arg1 bufferAllocator:(id)arg2;
+ (id)objectWithSCNNode:(id)arg1;
- (void)_updateAssociatedSCNNodeWithGeometrySetter:(CDUnknownBlockType)arg1 texturePathProvider:(CDUnknownBlockType)arg2 vertexAttributeNamed:(id)arg3 materialPropertyNamed:(id)arg4;
- (id)_associatedSCNNode;
@end

