//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface UIRuntimeOutletCollectionConnectionFragment : NSObject
{
    _Bool _addsContentToExistingCollection;
    NSString *_label;
    id _source;
    id _destination;
    NSString *_designtimeCollectionClassName;
    NSString *_runtimeCollectionClassName;
}

- (void).cxx_destruct;
@property _Bool addsContentToExistingCollection; // @synthesize addsContentToExistingCollection=_addsContentToExistingCollection;
@property(copy) NSString *runtimeCollectionClassName; // @synthesize runtimeCollectionClassName=_runtimeCollectionClassName;
@property(copy) NSString *designtimeCollectionClassName; // @synthesize designtimeCollectionClassName=_designtimeCollectionClassName;
@property(retain) id destination; // @synthesize destination=_destination;
@property(retain) id source; // @synthesize source=_source;
@property(copy) NSString *label; // @synthesize label=_label;

@end

