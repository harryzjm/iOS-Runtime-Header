//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <_StoreKit_SwiftUI/SKOverlayDelegate-Protocol.h>

@class MISSING_TYPE;

@interface _TtC17_StoreKit_SwiftUIP33_7A1CD05574219937BB53A614E2FE018426AppStoreOverlayCoordinator : NSObject <SKOverlayDelegate>
{
    MISSING_TYPE *isPresented;
    MISSING_TYPE *overlay;
    MISSING_TYPE *scene;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)storeOverlay:(id)arg1 didFinishDismissal:(id)arg2;
- (void)storeOverlay:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)storeOverlay:(id)arg1 didFinishPresentation:(id)arg2;

@end
