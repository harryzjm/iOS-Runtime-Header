//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface NTKResourceDirectoryScrubber : NSObject
{
    NSDictionary *_operationsMaps;
}

- (void).cxx_destruct;
- (_Bool)_scrubAssetAtURL:(id)arg1 toDestinationURL:(id)arg2 error:(id *)arg3;
- (_Bool)scrubDirectoryAtPath:(id)arg1 toDestinationPath:(id)arg2 error:(id *)arg3;
- (id)initWithOperations:(id)arg1;

@end
