//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MDMBlockOperation;

__attribute__((visibility("hidden")))
@interface MDMBlockOperationContext : NSObject
{
    MDMBlockOperation *_operation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MDMBlockOperation *operation; // @synthesize operation=_operation;
- (void)endBlockOperation;

@end

