//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ETDataSourceBuf : NSObject
{
    struct map<std::string, std::shared_ptr<Espresso::blob<float, 2>>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 2>>>>> blobs;
    int number_of_data_points;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (float *)dataAtIndex:(unsigned long long)arg1 key:(const void *)arg2;
- (void)setBlobs:(const void *)arg1 numberOfDataPoints:(int)arg2 nonBatches:(const void *)arg3;
- (id)dataPointAtIndex:(int)arg1;
- (int)numberOfDataPoints;

@end

