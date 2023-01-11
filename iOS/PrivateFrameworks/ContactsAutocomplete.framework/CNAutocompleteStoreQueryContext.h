//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNCache;

@interface CNAutocompleteStoreQueryContext : NSObject
{
    CNCache *_directoryServerReuseCache;
    CNCache *_calendarServerReuseCache;
}

+ (id)cacheBoundaryStrategies;
@property(readonly) CNCache *calendarServerReuseCache; // @synthesize calendarServerReuseCache=_calendarServerReuseCache;
@property(readonly) CNCache *directoryServerReuseCache; // @synthesize directoryServerReuseCache=_directoryServerReuseCache;
- (void).cxx_destruct;
- (id)init;

@end
