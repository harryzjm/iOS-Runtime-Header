//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXActionPerformer;

@protocol PXActionPerformerDelegate <NSObject>

@optional
- (_Bool)actionPerformer:(PXActionPerformer *)arg1 dismissViewController:(struct NSObject *)arg2 completionHandler:(void (^)(void))arg3;
- (_Bool)actionPerformer:(PXActionPerformer *)arg1 presentViewController:(struct NSObject *)arg2;
- (void)actionPerformer:(PXActionPerformer *)arg1 didChangeState:(unsigned long long)arg2;
@end

