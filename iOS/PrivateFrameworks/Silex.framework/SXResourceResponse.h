//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString, NSURL;

@interface SXResourceResponse : NSObject
{
    NSString *_resourceIdentifier;
    NSURL *_fileURL;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) NSString *resourceIdentifier; // @synthesize resourceIdentifier=_resourceIdentifier;
- (void).cxx_destruct;

@end

