//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol _SFMailContentProviderDataSource;

@interface _SFMailContentProvider : NSObject
{
    id <_SFMailContentProviderDataSource> _dataSource;
}

@property(nonatomic) __weak id <_SFMailContentProviderDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)prepareMailComposeViewController:(id)arg1 withURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

