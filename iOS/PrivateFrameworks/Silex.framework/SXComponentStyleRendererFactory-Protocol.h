//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@protocol SXComponent, SXComponentStyleRenderer;

@protocol SXComponentStyleRendererFactory <NSObject>
- (id <SXComponentStyleRenderer>)componentStyleRendererForComponent:(id <SXComponent>)arg1;
@end
