//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayDropbox : NSObject
{
    FCFileCoordinatedDictionary *_fileCoordinatedDictionary;
}

@property(retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary; // @synthesize fileCoordinatedDictionary=_fileCoordinatedDictionary;
- (void).cxx_destruct;
- (void)depositWithAccessor:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)peekWithAccessor:(CDUnknownBlockType)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)init;

@end

