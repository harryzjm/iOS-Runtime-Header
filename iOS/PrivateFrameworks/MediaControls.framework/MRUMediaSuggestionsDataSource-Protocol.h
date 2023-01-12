//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaControls/NSObject-Protocol.h>

@class NSDictionary;
@protocol MRUMediaSuggestionsDataSourceDelegate;

@protocol MRUMediaSuggestionsDataSource <NSObject>
@property(nonatomic) __weak id <MRUMediaSuggestionsDataSourceDelegate> delegate;
@property(readonly, nonatomic) NSDictionary *mediaSuggestions;
- (void)refreshMediaSuggestions;
@end

