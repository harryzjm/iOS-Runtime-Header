//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSCopying;

@interface PKDispatchAfterBlocks : NSObject
{
    id <NSCopying> _identifier;
}

@property(copy, nonatomic) id <NSCopying> identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)cancelAll;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)dispatchAfter:(double)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

