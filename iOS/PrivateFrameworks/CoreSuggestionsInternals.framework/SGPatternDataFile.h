//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface SGPatternDataFile : NSObject
{
    NSData *_fileData;
}

- (void).cxx_destruct;
- (id)dataForOffset:(id)arg1;
- (id)dataForOffset:(id)arg1 includeTerminator:(int)arg2;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithPath:(id)arg1;

@end
