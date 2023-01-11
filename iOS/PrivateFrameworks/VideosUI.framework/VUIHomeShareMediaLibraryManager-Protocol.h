//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSArray, VUIMediaLibraryManager;
@protocol VUIHomeShareMediaLibraryManagerDelegate;

@protocol VUIHomeShareMediaLibraryManager <NSObject>
@property(readonly, copy, nonatomic) NSArray *homeShareMediaLibraries;
@property(nonatomic) __weak id <VUIHomeShareMediaLibraryManagerDelegate> delegate;
- (id)initWithManager:(VUIMediaLibraryManager *)arg1;
@end

