//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUIApps/PXPhotosDetailsLocationSearchDataSource-Protocol.h>

@class MISSING_TYPE;
@protocol PXPhotosDetailsLocationSearchDelegate;

__attribute__((visibility("hidden")))
@interface _TtC12PhotosUIApps37PhotosDetailsLocationSearchDataSource : NSObject <PXPhotosDetailsLocationSearchDataSource>
{
    MISSING_TYPE *suggester;
    MISSING_TYPE *assets;
    MISSING_TYPE *locationShifter;
    MISSING_TYPE *delegate;
    MISSING_TYPE *canRemoveLocation;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) __weak id <PXPhotosDetailsLocationSearchDelegate> delegate; // @synthesize delegate;

@end
