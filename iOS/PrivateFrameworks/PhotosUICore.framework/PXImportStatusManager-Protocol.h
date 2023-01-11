//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@protocol PXDisplayAsset, PXImportStatusObserver;

@protocol PXImportStatusManager <NSObject>
- (void)removeImportStatusObserver:(id <PXImportStatusObserver>)arg1;
- (void)addImportStatusObserver:(id <PXImportStatusObserver>)arg1;
- (long long)importStateForAsset:(id <PXDisplayAsset>)arg1;
@end
