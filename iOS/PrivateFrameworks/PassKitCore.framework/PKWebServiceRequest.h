//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface PKWebServiceRequest : NSObject
{
}

+ (id)_HTTPBodyWithDictionary:(id)arg1;
+ (id)authHeaderWithAccount:(id)arg1;
- (id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 account:(id)arg4;
- (id)_murlRequestWithURL:(id)arg1 account:(id)arg2;
- (id)_murlRequestWithURL:(id)arg1;

@end
