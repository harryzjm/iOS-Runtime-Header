//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL, NSURLRequest, NSUUID;
@protocol __NSURLSessionTaskGroupForConfiguration;

@interface __NSCFTaskForClass : NSObject
{
    Class cl;
    NSURLRequest *request;
    NSUUID *uniqueIdentifier;
    NSURL *uploadFile;
    NSData *bodyData;
    CDUnknownBlockType completion;
    NSString *downloadFilePath;
    NSData *resumeData;
    CDUnknownBlockType downloadCompletion;
    id <__NSURLSessionTaskGroupForConfiguration> _group;
}

@property(readonly, retain) id <__NSURLSessionTaskGroupForConfiguration> group; // @synthesize group=_group;
@property(copy) CDUnknownBlockType downloadCompletion; // @synthesize downloadCompletion;
@property(retain) NSData *resumeData; // @synthesize resumeData;
@property(retain) NSString *downloadFilePath; // @synthesize downloadFilePath;
@property(copy) CDUnknownBlockType completion; // @synthesize completion;
@property(retain) NSData *bodyData; // @synthesize bodyData;
@property(retain) NSURL *uploadFile; // @synthesize uploadFile;
@property(retain) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier;
@property(retain) NSURLRequest *request; // @synthesize request;
@property(retain) Class cl; // @synthesize cl;
- (void)dealloc;
- (id)initWithGroup:(id)arg1;

@end
