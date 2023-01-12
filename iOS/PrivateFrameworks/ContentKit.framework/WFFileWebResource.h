//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WFWebResource.h"

@class WFFileRepresentation;

__attribute__((visibility("hidden")))
@interface WFFileWebResource : WFWebResource
{
    WFFileRepresentation *_file;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) WFFileRepresentation *file; // @synthesize file=_file;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)MIMEType;
- (id)data;
- (id)loadInWKWebView:(id)arg1;
- (id)initWithFile:(id)arg1;

@end

