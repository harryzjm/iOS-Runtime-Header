//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface _UITableViewCellReuseParameters : NSObject
{
    _Bool _didEndDisplaying;
    NSIndexPath *_indexPath;
}

@property(readonly, nonatomic) _Bool didEndDisplaying; // @synthesize didEndDisplaying=_didEndDisplaying;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (id)initWithIndexPath:(id)arg1 didEndDisplaying:(_Bool)arg2;

@end
