//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, VSOptional;

@interface VSFileWriteOperation
{
    VSOptional *_data;
    VSOptional *_destination;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) VSOptional *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) VSOptional *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)init;

@end
