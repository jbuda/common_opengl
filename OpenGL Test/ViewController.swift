//
//  ViewController.swift
//  OpenGL Test
//
//  Created by Janusz on 13/02/2017.
//  Copyright © 2017 Janusz. All rights reserved.
//

import UIKit
import GLKit

class ViewController: GLKViewController {
  
  lazy var context:EAGLContext = {
    return EAGLContext(api: .openGLES3)
  }()

  override func viewDidLoad() {
    super.viewDidLoad()
    
    if let view = view as? GLKView {
      
      view.context = context
      setupGL()
    }
  }
  
  fileprivate func setupGL() {
    EAGLContext.setCurrent(context)
    
    CoreWrapper.onSurfaceCreated();
    CoreWrapper.onSurfaceChanged(300,h:300);
  }
  
  override func glkView(_ view: GLKView, drawIn rect: CGRect) {
    CoreWrapper.onDrawFrame();
  }
  
}

