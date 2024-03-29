//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MPAVRoutingControllerSelection : NSObject
{
    NSArray *_routes;
    long long _selectionOperation;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) long long selectionOperation; // @synthesize selectionOperation=_selectionOperation;
@property(retain, nonatomic) NSArray *routes; // @synthesize routes=_routes;
- (id)description;
- (id)initWithRoutes:(id)arg1 selectionOperation:(long long)arg2;

@end

