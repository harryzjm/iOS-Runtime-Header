//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ICEResultQuery : NSObject
{
    unsigned int callID;
    struct tagCONNRESULT *result;
    _Bool isQueryAnswered;
}

@property _Bool isQueryAnswered; // @synthesize isQueryAnswered;
@property unsigned int callID; // @synthesize callID;
- (void)dealloc;
@property struct tagCONNRESULT *result;
- (id)initWithCallID:(unsigned int)arg1;
- (id)initWithResult:(struct tagCONNRESULT *)arg1;

@end
