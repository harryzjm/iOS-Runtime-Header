//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;

@interface MTPromiseResult : NSObject
{
    NSError *_error;
    id _result;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id result; // @synthesize result=_result;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
- (id)initWithResult:(id)arg1 error:(id)arg2;

@end
