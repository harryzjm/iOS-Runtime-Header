//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_$s8VideosUI29DocumentRequestViewControllerCN.h"

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI31PlayerHUDDocumentViewController : _$s8VideosUI29DocumentRequestViewControllerCN
{
    MISSING_TYPE *templateControllerHosted;
    MISSING_TYPE *nowPlayingTabDelegate;
    MISSING_TYPE *tabContextData;
    MISSING_TYPE *refetchUpNext;
    MISSING_TYPE *isMultiView;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)updateVisibleCellsWithPlaybackIdentifiers:(id)arg1;
- (void)updateWithSelectedPlaybackIdentifiers:(id)arg1 reloadingData:(_Bool)arg2;
- (void)vui_viewDidLoad;
- (void)vui_viewDidAppear:(_Bool)arg1;
@property(nonatomic, readonly) long long itemCount;

@end

