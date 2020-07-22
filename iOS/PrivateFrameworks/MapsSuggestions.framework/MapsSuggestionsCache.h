//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class NSString;

@interface MapsSuggestionsCache : NSObject <MapsSuggestionsObject>
{
}

+ (_Bool)saveToFilePath:(id)arg1 storage:(struct NSMutableDictionary *)arg2 ETAValidUntilDate:(id)arg3;
+ (_Bool)loadFromFilePath:(id)arg1 storage:(struct NSMutableDictionary **)arg2 ETAValidUntilDate:(id *)arg3;
@property(readonly, nonatomic) NSString *uniqueName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

