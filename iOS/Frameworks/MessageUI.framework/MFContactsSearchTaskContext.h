//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol MFContactsSearchConsumer;

@interface MFContactsSearchTaskContext : NSObject
{
    id <MFContactsSearchConsumer> _consumer;
    NSString *_text;
    NSMutableSet *_operations;
    NSMutableSet *_searchQueries;
}

+ (id)contextWithConsumer:(id)arg1 text:(id)arg2 operations:(id)arg3 searchQueries:(id)arg4;
@property(readonly, nonatomic) NSMutableSet *searchQueries; // @synthesize searchQueries=_searchQueries;
@property(readonly, nonatomic) NSMutableSet *operations; // @synthesize operations=_operations;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) id <MFContactsSearchConsumer> consumer; // @synthesize consumer=_consumer;
- (_Bool)consumerRespondsToNetworkingMethods;
- (_Bool)consumerRespondsToCorecipientCallbacks;
- (_Bool)consumerRespondsToAutocompleteCallbacks;
- (_Bool)consumerRespondsToOldSortingCallbacks;
- (void)dealloc;
- (_Bool)done;

@end

