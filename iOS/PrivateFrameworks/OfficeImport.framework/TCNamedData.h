//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface TCNamedData : NSObject
{
    NSData *mData;
    NSString *mName;
}

+ (id)namedDataWithData:(id)arg1 named:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name; // @synthesize name=mName;
@property(readonly, nonatomic) NSData *data; // @synthesize data=mData;
- (id)initWithData:(id)arg1 named:(id)arg2;

@end

