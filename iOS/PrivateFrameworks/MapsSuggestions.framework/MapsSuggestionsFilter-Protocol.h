//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class MapsSuggestionsEntry;

@protocol MapsSuggestionsFilter <MapsSuggestionsObject>
+ (_Bool)isEnabled;
- (_Bool)shouldKeepEntry:(MapsSuggestionsEntry *)arg1;
@end
