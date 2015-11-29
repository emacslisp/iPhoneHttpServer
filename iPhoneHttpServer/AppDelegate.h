//
//  AppDelegate.h
//  iPhoneHttpServer
//
//  Created by wu di on 15/11/29.
//  Copyright (c) 2015年 wu di. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HTTPServer;

@interface AppDelegate : UIResponder <UIApplicationDelegate>{
    HTTPServer *httpServer;
}

@property (strong, nonatomic) UIWindow *window;


@end

