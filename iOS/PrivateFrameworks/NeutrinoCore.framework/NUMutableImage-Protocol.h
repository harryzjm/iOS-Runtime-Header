//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NUImage-Protocol.h>

@class NURegion;
@protocol NUDevice, NUImageStorage, NUSurfaceStorage;

@protocol NUMutableImage <NUImage>
- (_Bool)copyBufferStorage:(id <NUImageStorage>)arg1 region:(NURegion *)arg2 atPoint:(CDStruct_912cb5d2)arg3;
- (_Bool)copySurfaceStorage:(id <NUSurfaceStorage>)arg1 device:(id <NUDevice>)arg2 region:(NURegion *)arg3 atPoint:(CDStruct_912cb5d2)arg4;
@end

